function r_val = plot_panel_trxsh ...
     ( ...
       cfreq, ...
       dflopspercycle, ...
       nth, ...
       thr_str, ...
       dt_ch, ...
       stor_str, ...
       smalldims, ...
       ldim_str, ...
       pack_str, ...
       dirpath, ...
       arch_str, ...
       vend_str, ...
       impl ...
     )

if 1 == 1
	%fig = figure('Position', [100, 100, 2400, 1500]);
	fig = figure('Position', [100, 100, 2400, 1200]);
	orient( fig, 'portrait' );
	set(gcf,'PaperUnits', 'inches');
	if impl == 'matlab'
		set(gcf,'PaperSize', [11.5 20.4]);
		set(gcf,'PaperPosition', [0 0 11.5 20.4]);
		set(gcf,'PaperPositionMode','manual');
	else % impl == 'octave' % octave 4.x
	   set(gcf,'PaperSize', [12 22.0]);
	   set(gcf,'PaperPositionMode','auto');
	end
	set(gcf,'PaperOrientation','landscape');
end

% Create filename "templates" for the files that contain the performance
% results.
filetemp_blissup  = '%s/output_%s_%s_blissup.m';
filetemp_blisconv = '%s/output_%s_%s_blisconv.m';
filetemp_eigen    = '%s/output_%s_%s_eigen.m';
filetemp_open     = '%s/output_%s_%s_openblas.m';
filetemp_bfeo     = '%s/output_%s_%s_blasfeo.m';
filetemp_vend     = '%s/output_%s_%s_vendor.m';
filetemp_bfeo     = '%s/output_%s_%s_blasfeo.m';
filetemp_xsmm     = '%s/output_%s_%s_libxsmm.m';

% Create a variable name "template" for the variables contained in the
% files outlined above.
vartemp = 'data_%s_%s_%s( :, : )';

% Define the datatypes and operations we will be plotting.
oproot      = sprintf( '%cgemm', dt_ch );
ops( 1, : ) = sprintf( '%s_nn', oproot );
ops( 2, : ) = sprintf( '%s_nt', oproot );
ops( 3, : ) = sprintf( '%s_tn', oproot );
ops( 4, : ) = sprintf( '%s_tt', oproot );

% Generate datatype-specific operation names from the set of operations
% and datatypes.
[ opsupnames, opnames ] = gen_opsupnames( ops, stor_str, smalldims, ldim_str, pack_str );
n_opsupnames = size( opsupnames, 1 );

%opsupnames
%opnames
%return

% Iterate over the list of datatype-specific operation names.
for opi = 1:n_opsupnames
%for opi = 1:1

	% Grab the current datatype combination.
	opsupname = opsupnames( opi, : );
	opname    = opnames( opi, : );

	% Remove leading and trailing whitespace.
	opsupname = strtrim( opsupname );
	opname    = strtrim( opname );

	% Output progress through the loop.
	str = sprintf( 'Plotting %2d: %s', opi, opsupname ); disp(str);

	% Load the data for each dataset.
	data_blissup  = load_data( filetemp_blissup,  dirpath, thr_str, opsupname, vartemp, opname, 'blissup' );
	data_blisconv = load_data( filetemp_blisconv, dirpath, thr_str, opsupname, vartemp, opname, 'blisconv' );
	data_eigen    = load_data( filetemp_eigen,    dirpath, thr_str, opsupname, vartemp, opname, 'eigen' );
	data_open     = load_data( filetemp_open,     dirpath, thr_str, opsupname, vartemp, opname, 'openblas' );
	data_vend     = load_data( filetemp_vend,     dirpath, thr_str, opsupname, vartemp, opname, 'vendor' );

	% Only read blasfeo data for single-threaded cases.
	if nth == 1
		data_bfeo = load_data( filetemp_bfeo,     dirpath, thr_str, opsupname, vartemp, opname, 'blasfeo' );
	else
		data_bfeo = zeros( size( data_blissup, 1 ), size( data_blissup, 2 ) );
	end

	% Only read libxsmm data for single-threaded cases, and cases that use column
	% storage since that's the only format that libxsmm supports.
	if nth == 1 && stor_str == 'ccc'
		data_xsmm = load_data( filetemp_xsmm,     dirpath, thr_str, opsupname, vartemp, opname, 'libxsmm' );
	else
		data_xsmm = zeros( size( data_blissup, 1 ), size( data_blissup, 2 ) );
	end

	% Plot one result in an m x n grid of plots, via the subplot()
	% function.
	plot_l3sup_perf( opsupname, ...
	                 smalldims, ...
	                 data_blissup, ...
	                 data_blisconv, ...
	                 data_eigen, ...
	                 data_open, ...
	                 data_bfeo, ...
	                 data_vend, vend_str, ...
	                 data_bfeo, ...
	                 data_xsmm, ...
	                 nth, ...
	                 4, 7, ...
	                 cfreq, ...
	                 dflopspercycle, ...
	                 opi, impl );

	% Clear the variables created for the return values of load_data().
	%clear data_blissup;
	%clear data_blisconv;
	%clear data_eigen;
	%clear data_open;
	%clear data_vend;
	%clear data_bfeo;
	%clear data_xsmm;

	% Clear the variables used in the raw data files.
	%clear data_st_*gemm_*;
	%clear data_mt_*gemm_*;
end

% Construct the name of the file to which we will output the graph.
outfile = sprintf( 'l3sup_%s_%s_%s_nt%d.pdf', oproot, stor_str, arch_str, nth );

% Output the graph to pdf format.
%print(gcf, 'gemm_md','-fillpage','-dpdf');
%print(gcf, outfile,'-bestfit','-dpdf');
if impl == 'octave'
	print(gcf, outfile);
else % if impl == 'matlab'
	print(gcf, outfile,'-bestfit','-dpdf');
end

