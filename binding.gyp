{
  "targets": [
    {
      "target_name": "awtk",
      "sources": [ "src/c/tk_nodejs.cc", "src/assets.c"],
      'defines': [
        'WITH_FS_RES=1'
      ],
      "ldflags": [
        "-Wl,-z,now",
      ],
      "include_dirs": [
        "./",
        "../awtk",
        "../awtk/src",
        "../awtk/3rd",
        "../awtk/src/ext_widgets",
        '<!(node -e \'require("nan")\')'
      ],
      "link_settings": {
        "libraries": [
         "-lawtk",
         "-lextwidgets",
         "-lwidgets",
         "-lbase",
         "-ltkc",
         "-lnanovg",
         "-lglad",
         "-lgpinyin",
         "-llinebreak",
         "-lSDL2"
         ],
        "library_dirs": [
          "<(module_root_dir)/../awtk/lib"
        ]
      },
      "conditions": [[
			'OS=="mac"', {
				"include_dirs": [
				]
			}
		], [
			'OS=="linux" and target_arch=="ia32"', {
				"libraries": [
				],
				"include_dirs": [
				]
			}
		], [
			'OS=="linux" and target_arch=="x64"', {
				"libraries": [
				],
				"include_dirs": [
				]
			}
		]]
    }
  ]
}
