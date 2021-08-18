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
                "<(module_root_dir)/../awtk",
                "<(module_root_dir)/../awtk/src",
                "<(module_root_dir)/../awtk/3rd",
                "<(module_root_dir)/../awtk/src/ext_widgets",
                '<(module_root_dir)/node_modules/nan',
                '<!(node -e \'require("nan")\')'
            ],
            "link_settings": {
                "libraries": [
                ],
                "library_dirs": [
                    "<(module_root_dir)/../awtk/bin",
                    "<(module_root_dir)/../awtk/lib"
                ]
            },
            "conditions": [[
                'OS=="mac"', {
                    "copies": [
                        {
                            'destination': './build/Release',
                            'files': [
                                '../awtk/bin/libawtk.dynlib'
                            ]
                        }
                    ],
                    "libraries": [
                        "-lawtk",
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
                    "copies": [
                        {
                            'destination': './build/Release',
                            'files': [
                                '../awtk/bin/awtk.dll'
                            ]
                        }
                    ],
                    "libraries": [
                        "-lawtk",
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
                    "copies": [
                        {
                            'destination': './build/Release',
                            'files': [
                                '../awtk/bin/libawtk.so'
                            ]
                        }
                    ],
                    "libraries": [
                        "-lawtk",
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
