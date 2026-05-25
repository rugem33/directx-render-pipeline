# Architecture

이 문서는 DirectX Rendering Pipeline 프로젝트의 초기 아키텍처를 설명합니다.

## Layer Overview

```text
Application Layer
  - Window
  - Input
  - Timer
  - Main Loop

Graphics Layer
  - GraphicsDevice
  - SwapChain
  - Buffer
  - Texture
  - Shader
  - RenderTarget
  - DepthStencil

Renderer Layer
  - ForwardRenderer
  - DeferredRenderer
  - ShadowPass
  - GeometryPass
  - LightingPass
  - PostProcessPass
  - DebugView

Scene Layer
  - Camera
  - Mesh
  - Model
  - Material
  - Light
```

## Core Responsibilities

### Application Layer

창 생성, 입력 처리, 시간 계산, 메인 루프를 담당합니다.

### Graphics Layer

DirectX API 호출을 직접 감싸는 계층입니다. Device, Context, SwapChain, Buffer, Texture, Shader, RenderTarget 같은 GPU 리소스를 관리합니다.

### Renderer Layer

렌더링 알고리즘과 렌더 패스 실행 순서를 담당합니다. Forward Rendering, Deferred Rendering, Shadow Mapping, Post Processing이 이 계층에 포함됩니다.

### Scene Layer

렌더링 대상이 되는 카메라, 메시, 머티리얼, 조명 데이터를 관리합니다.

## Planned Frame Flow

```text
Begin Frame
  -> Update Scene
  -> Shadow Pass
  -> Geometry Pass
  -> Lighting Pass
  -> Post Process Pass
  -> Debug UI Pass
  -> Present
End Frame
```

## Design Principle

- DirectX API 호출은 Graphics Layer에 최대한 격리합니다.
- 렌더링 알고리즘은 Renderer Layer에 배치합니다.
- 장면 데이터는 Scene Layer에 배치합니다.
- 각 Render Pass는 입력 리소스와 출력 리소스를 명확히 정의합니다.
