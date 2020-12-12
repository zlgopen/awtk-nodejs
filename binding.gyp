{
    "targets": [
        {
            "target_name": "awtk",
            "sources": ["src/c/tk_nodejs.cc", "src/assets.c"],
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
                './node_modules/nan',
                '<!(node -e \'require("nan")\')'
            ],
            "link_settings": {
                "libraries": [
                ],
                "library_dirs": [
                    "<(module_root_dir)/../awtk/lib"
                ]
            },
            "conditions": [[
                'OS=="mac"', {
                    "libraries": [
                        "-lawtk_global",
                        "-lextwidgets",
                        "-lwidgets",
                        "-lbase",
                        "-lconf_io",
                        "-lnanovg",
                        "-lglad",
                        "-lgpinyin",
                        "-ltkc_static",
                        "-lfribidi",
                        "-llinebreak",
                        "-lSDL2",
                        "-lstdc++",
                        "-lpthread",
                        "-lm",
                        "-ldl"
                    ],
                    "include_dirs": [
                    ]
                }
            ],
                [
                'OS=="win"', {
                    "libraries": [
                        "-lawtk_global",
                        "-lextwidgets",
                        "-lwidgets",
                        "-lbase",
                        "-lconf_io",
                        "-lnanovg",
                        "-lglad",
                        "-lgpinyin",
                        "-ltkc_static",
                        "-lfribidi",
                        "-llinebreak",
                        "-lSDL2",
                        "-lgdi32",
                        "-luser32",
                        "-lwinmm",
                        "-limm32",
                        "-lversion",
                        "-lshell32",
                        "-lole32",
                        "-lOleaut32",
                        "-lAdvapi32",
                        "-lDelayImp",
                        "-lpsapi"
                    ],
                    "include_dirs": [
                    ]
                }
            ],
                [
                'OS=="linux"', {
                    "libraries": [
                        "-lawtk_global",
                        "-lextwidgets",
                        "-lwidgets",
                        "-lbase",
                        "-lconf_io",
                        "-lnanovg",
                        "-lglad",
                        "-lgpinyin",
                        "-ltkc_static",
                        "-lfribidi",
                        "-llinebreak",
                        "-lSDL2",
                        "-lGL",
                        "-lgtk-3",
                        "-lgdk-3",
                        "-lXext",
                        "-lX11",
                        "-lsndio",
                        "-lstdc++",
                        "-lpthread",
                        "-lm",
                        "-ldl"
                    ],
                    "include_dirs": [
                    ]
                }
            ]]
        }
    ]
}
