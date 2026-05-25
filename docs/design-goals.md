# Design Goals

이 프로젝트의 목표는 단순히 DirectX로 화면을 출력하는 것이 아니라, 렌더링 파이프라인을 구조적으로 설계하고 문서화하는 것입니다.

## Main Goals

1. DirectX 기반 실시간 렌더러의 기본 구조를 직접 구현한다.
2. 렌더 패스를 모듈화하여 파이프라인 단계를 명확히 분리한다.
3. GPU 리소스 관리 방식을 코드와 문서로 설명 가능하게 만든다.
4. Debug View를 통해 중간 렌더링 결과를 시각적으로 검증한다.
5. PIX 또는 RenderDoc 캡처를 통해 프레임 분석 과정을 기록한다.

## Non-Goals

이 프로젝트는 게임 개발 프로젝트가 아닙니다.

- 게임플레이 시스템 구현은 목표가 아닙니다.
- 콘텐츠 제작이나 레벨 디자인은 핵심 목표가 아닙니다.
- 완성된 게임 데모보다 렌더링 구조와 구현 과정을 우선합니다.

## Portfolio Direction

포트폴리오에서 강조할 핵심 문장은 다음과 같습니다.

> DirectX를 사용하여 실시간 렌더링 파이프라인을 직접 설계하고, 렌더 패스, 셰이더, GPU 리소스, 디버그 뷰, 성능 분석 흐름을 구현했습니다.

## Technical Focus

- DirectX 11 렌더링 파이프라인
- DirectX 12 저수준 그래픽스 API 구조
- HLSL Shader
- Render Target / Depth Buffer
- Constant Buffer / Shader Resource View
- Forward Rendering
- Deferred Rendering
- Shadow Mapping
- Post Processing
- Debug Visualization
