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
                        "-lawtk",
                        "-lextwidgets",
                        "-lwidgets",
                        "-lbase",
                        "-lnanovg",
                        "-lglad",
                        "-lgpinyin",
                        "-ltkc",
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
                        "-lawtk",
                        "-lextwidgets",
                        "-lwidgets",
                        "-lbase",
                        "-lnanovg",
                        "-lglad",
                        "-lgpinyin",
                        "-ltkc",
                        "-llinebreak",
                        "-lSDL2"
                    ],
                    "include_dirs": [
                    ]
                }
            ],
                [
                'OS=="linux"', {
                    "libraries": [
                        "-lawtk",
                        "-lextwidgets",
                        "-lwidgets",
                        "-lbase",
                        "-lnanovg",
                        "-lglad",
                        "-lgpinyin",
                        "-ltkc",
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
