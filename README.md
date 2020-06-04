# PhysicsTools

[![Build Status](https://travis-ci.com/Xrayez/godot-physicstools.svg?branch=master-gd3)](https://travis-ci.com/Xrayez/godot-physicstools)
[![Build status](https://ci.appveyor.com/api/projects/status/tbtra8e221si05bq/branch/master-gd3?svg=true)](https://ci.appveyor.com/project/Xrayez/godot-physicstools/branch/master-gd3)

## DEPRECATED: use [Goost](https://github.com/GoostGD/goost) extension instead

The module is no longer maintained by the original author(s) and only critical
bug fixes are accepted.

The module's entire functionality is merged as part of the
[Goost](https://github.com/GoostGD/goost) extension. Users and past contributors
(if any) are encouraged to switch to use the extension.

---

This is a [Godot](https://github.com/godotengine/godot) module which aims to
provide various physics classes and utility methods.

### List of classes:

| Class         | Short Description                                                                                       |
| ------------- | ------------------------------------------------------------------------------------------------------- |
| `ShapeCast2D` | A node which casts any `Shape2D` for intersections against the physics space, similarly to `RayCast2D`. |

## Installation

Before installing, you must be able to 
[compile Godot Engine](https://docs.godotengine.org/en/latest/development/compiling/) 
from source.

```bash
git clone https://github.com/Xrayez/godot-physicstools.git physicstools
scons custom_modules=/path/to/directory/containing/the/module
```

## Contributing
     
See [Contributing](CONTRIBUTING.md) if you are interested in extending the
module in any way.

Any new features are encouraged to be developed against the latest Godot
Engine's *stable* version, and later ported to the latest engine's *development*
version.

## License

The module is under the [MIT license](LICENSE.md).
