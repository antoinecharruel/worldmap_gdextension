#pragma once

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture_rect.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/gdvirtual.gen.inc>

class WorldMap : public godot::Control {

public:
	WorldMap(); // CONSTRUCTOR.
	~WorldMap() override = default; // DESTRUCTOR.

    void set_world_map_texture(const godot::Ref<godot::Texture2D> &texture);
    godot::Ref<godot::Texture2D> get_world_map_texture();

protected:
	static void _bind_methods();

private:
	GDCLASS(WorldMap, Control)

    godot::TextureRect* texture_rect;
    godot::Ref<godot::Texture2D> world_map;
};
