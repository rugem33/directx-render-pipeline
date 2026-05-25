# Roadmap

DirectX Rendering Pipeline 프로젝트의 단계별 개발 계획입니다.

## Phase 0. Repository Setup

- [x] README 작성
- [x] 프로젝트 목표 정의
- [x] 초기 아키텍처 문서 작성
- [x] 렌더링 파이프라인 문서 작성
- [x] 로드맵 작성

## Phase 1. DirectX 11 Foundation

- [ ] Win32 Window 생성
- [ ] Application Loop 구현
- [ ] D3D11 Device 생성
- [ ] SwapChain 생성
- [ ] RenderTargetView 생성
- [ ] DepthStencilView 생성
- [ ] Clear / Present 구현
- [ ] Triangle 렌더링

## Phase 2. Rendering Abstraction

- [ ] VertexBuffer 클래스
- [ ] IndexBuffer 클래스
- [ ] ConstantBuffer 클래스
- [ ] Shader 클래스
- [ ] Texture2D 클래스
- [ ] RenderTarget 클래스
- [ ] DepthStencil 클래스

## Phase 3. Scene Rendering

- [ ] Camera 구현
- [ ] Transform 구현
- [ ] Mesh 구현
- [ ] Material 구현
- [ ] Directional Light 구현
- [ ] Point Light 구현
- [ ] Forward Renderer 구현

## Phase 4. Advanced Rendering

- [ ] Shadow Mapping
- [ ] Normal Mapping
- [ ] Render Target 기반 화면 합성
- [ ] Post Processing
- [ ] Deferred Rendering
- [ ] G-Buffer Debug View

## Phase 5. Tooling and Analysis

- [ ] Dear ImGui 연동
- [ ] Debug View UI 구현
- [ ] FPS / Frame Time 표시
- [ ] PIX 캡처 기록
- [ ] RenderDoc 캡처 기록
- [ ] Forward vs Deferred 비교 문서화

## Phase 6. DirectX 12 Mini Renderer

- [ ] D3D12 Device 생성
- [ ] Command Queue 생성
- [ ] Command Allocator / Command List 관리
- [ ] Fence 동기화
- [ ] Descriptor Heap 관리
- [ ] Root Signature 작성
- [ ] Pipeline State Object 작성
- [ ] Resource Barrier 관리
- [ ] Triangle 렌더링
- [ ] Constant Buffer Upload 구현

## Final Portfolio Output

- 실행 가능한 데모
- 렌더링 파이프라인 구조도
- G-Buffer Debug View 스크린샷
- Shadow Mapping 결과 비교
- PIX / RenderDoc 분석 화면
- DirectX 11 / DirectX 12 구조 비교 문서
