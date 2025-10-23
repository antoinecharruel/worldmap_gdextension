#include "world_map.h"

void WorldMap::set_world_map_texture(const godot::Ref<godot::Texture2D> &texture){
    world_map = texture;
}

godot::Ref<godot::Texture2D> WorldMap::get_world_map_texture(){
    return world_map;
}

void WorldMap::_bind_methods(){
    godot::ClassDB::bind_method(godot::D_METHOD("set_world_map_texture", "texture"), &WorldMap::set_world_map_texture);
    godot::ClassDB::bind_method(godot::D_METHOD("get_world_map_texture"), &WorldMap::add_user_signal);
    ADD_PROPERTY(godot::PropertyInfo(godot::Variant::OBJECT, "world_map_texture", 
        godot::PROPERTY_HINT_RESOURCE_TYPE, "Texture2D"), "set_world_map_texture", "get_world_map_texture");
}

WorldMap::WorldMap(){
    texture_rect = memnew(godot::TextureRect);
    add_child(texture_rect);
    texture_rect->set_anchors_preset(PRESET_FULL_RECT);
}