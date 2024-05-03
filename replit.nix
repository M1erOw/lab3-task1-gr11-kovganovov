{ pkgs }: {
	deps = [
   pkgs.cliquer
   pkgs.cl-launch
   pkgs.run
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}