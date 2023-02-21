#pragma once

#include "Hazel/Renderer/VertexArray.h"

namespace Hazel {

	class OpenGLVertexArray : public VertexArray
	{
	public:
		OpenGLVertexArray();
		virtual ~OpenGLVertexArray();

		virtual void Bind() const override;
		virtual void Unbind() const override;

		virtual void AddVertexBuffer(const Hazel::Ref<VertexBuffer>& vertexBuffer);
		virtual void SetIndexBuffer(const Hazel::Ref<IndexBuffer>& indexBuffer);

		virtual const std::vector<Hazel::Ref<VertexBuffer>>& GetVertexBuffers() const { return m_VertexBuffers; }
		virtual const Hazel::Ref<IndexBuffer>& GetIndexBuffer() const {return m_IndexBuffer;}

	private:
		uint32_t m_RendererID;
		uint32_t m_VertexLEIndex = 0; // Vertex layout element index
		std::vector<Hazel::Ref<VertexBuffer>> m_VertexBuffers;
		Hazel::Ref<IndexBuffer> m_IndexBuffer;
	};

}