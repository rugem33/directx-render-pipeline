# DirectX Rendering Pipeline

DirectX 기반 실시간 렌더링 파이프라인을 직접 설계하고 구현하는 개인 포트폴리오 프로젝트입니다.

이 프로젝트는 게임 제작이 아니라, **렌더링 파이프라인 구조 설계**, **GPU 리소스 관리**, **셰이더 시스템**, **렌더 패스 구성**, **디버그 뷰**, **성능 분석**을 목표로 합니다.

## Project Goal

이 저장소의 최종 목표는 DirectX를 사용하여 다음과 같은 커스텀 렌더러를 구현하는 것입니다.

- DirectX 11 기반 렌더링 파이프라인 구현
- HLSL 기반 셰이더 구조 설계
- Forward Rendering 구현
- Deferred Rendering 구현
- G-Buffer 설계 및 디버그 뷰 제공
- Shadow Mapping 구현
- Post Processing Pass 구현
- DirectX 12 Mini Renderer로 확장
- PIX / RenderDoc 기반 프레임 분석

## Why this project?

상용 게임 엔진을 단순히 사용하는 것이 아니라, 렌더링 파이프라인이 내부적으로 어떤 구조로 동작하는지 이해하고 직접 구현하기 위한 프로젝트입니다.

핵심 관심사는 다음과 같습니다.

- 렌더링 파이프라인 단계별 책임 분리
- Render Target / Depth Buffer 관리
- Shader Resource View / Constant Buffer 관리
- Geometry Pass / Lighting Pass / Post Process Pass 구성
- CPU-GPU 데이터 전달 구조
- 프레임 디버깅 및 병목 분석

## Planned Architecture

```text
Application
  -> Window / Input / Timer
  -> Graphics Device
  -> Renderer
      -> Shadow Pass
      -> Geometry Pass
      -> Lighting Pass
      -> Post Process Pass
      -> Debug View
  -> Scene
      -> Camera
      -> Mesh
      -> Material
      -> Light
```

## Initial Milestones

### Phase 1. DirectX 11 Renderer

- [ ] Win32 Window 생성
- [ ] D3D11 Device / DeviceContext / SwapChain 초기화
- [ ] Render Target View / Depth Stencil View 생성
- [ ] Triangle 렌더링
- [ ] Vertex Buffer / Index Buffer 래핑
- [ ] Constant Buffer 시스템 구현
- [ ] HLSL Shader 컴파일 및 관리
- [ ] Camera 시스템 구현
- [ ] Texture / Material 시스템 구현
- [ ] Forward Lighting 구현
- [ ] Render Target 기반 Post Processing 구현
- [ ] Shadow Mapping 구현
- [ ] Deferred Rendering 구현
- [ ] G-Buffer Debug View 구현

### Phase 2. DirectX 12 Mini Renderer

- [ ] D3D12 Device / Command Queue / SwapChain 초기화
- [ ] Command Allocator / Command List 관리
- [ ] Fence 기반 CPU-GPU 동기화
- [ ] Descriptor Heap 관리
- [ ] Root Signature 설계
- [ ] Pipeline State Object 관리
- [ ] Resource Barrier 관리
- [ ] Constant Buffer Upload 구조 구현
- [ ] 기본 Forward Renderer 구현

## Tech Stack

| Area | Stack |
|---|---|
| Language | C++17 |
| Graphics API | DirectX 11, DirectX 12 |
| Shader | HLSL |
| Platform | Windows |
| Build | CMake / Visual Studio |
| Debug UI | Dear ImGui |
| Profiling | PIX, RenderDoc |
| Asset Loading | Assimp, stb_image |

## Repository Structure

```text
directx-render-pipeline/
├─ CMakeLists.txt
├─ README.md
├─ docs/
│  ├─ architecture.md
│  ├─ roadmap.md
│  ├─ rendering-pipeline.md
│  └─ design-goals.md
├─ src/
│  ├─ main.cpp
│  ├─ Core/
│  ├─ Graphics/
│  ├─ Renderer/
│  └─ Scene/
├─ shaders/
│  ├─ Forward.hlsl
│  └─ FullscreenTriangle.hlsl
├─ assets/
└─ external/
```

## Portfolio Focus

이 프로젝트에서 포트폴리오로 강조할 부분은 단순한 화면 출력이 아니라 다음 항목입니다.

1. 렌더링 파이프라인을 직접 설계한 과정
2. 각 렌더 패스의 입력과 출력 구조
3. G-Buffer Layout 설계
4. Shader / Buffer / Texture 리소스 관리 방식
5. Debug View를 통한 렌더링 결과 검증
6. PIX / RenderDoc 캡처 기반 분석
7. DirectX 11과 DirectX 12 구조 차이 비교

## Documentation

- [Design Goals](docs/design-goals.md)
- [Rendering Pipeline](docs/rendering-pipeline.md)
- [Architecture](docs/architecture.md)
- [Roadmap](docs/roadmap.md)

## Current Status

초기 프로젝트 구조 및 설계 문서 작성 단계입니다.

## License

MIT License
