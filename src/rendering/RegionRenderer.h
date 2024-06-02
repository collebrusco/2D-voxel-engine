#ifndef REGION_RENDERER_H
#define REGION_RENDERER_H
#include "Renderer.h"
#include "../game/World.h"
#include <flgl.h>
#include <flgl/glm.h>

struct RegionRenderer : public Renderer {
	RegionRenderer();
	virtual ~RegionRenderer() = default;

	static Texture tile_tex;

	static VertexArray t_vao;
	static VertexBuffer<glm::vec3> t_posbuff;
	static ElementBuffer t_ibo;
	static Shader region_shader;
	VertexBuffer<glm::vec2> t_uvbuff;

	Region* target;

	void use_region(Region* reg);

	static void sync_camera(Camera& cam);

	static void static_init();
	static void static_destroy();

	virtual void init() override final;

	virtual void prepare() override final;

	virtual void render() override final;

	virtual void destroy() override final;


};


#endif