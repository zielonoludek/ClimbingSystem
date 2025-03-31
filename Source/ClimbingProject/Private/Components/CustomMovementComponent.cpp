#include "Components/CustomMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"

#pragma region ClimbTraces

TArray<FHitResult> UCustomMovementComponent::DoCapsuleTraceMultiByObject(const FVector& Start, const FVector& End, bool bShowDebugShape = false)
{
	TArray<FHitResult> OutHits;
	UKismetSystemLibrary::CapsuleTraceMultiForObjects(
		this,
		Start,
		End,
		ClimbCapsuleTraceRadius,
		ClimbCapsuleTraceHalfHeight,
		ClimbableSurfaceTraceTypes,
		false,
		TArray<AActor*>(),
		bShowDebugShape ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None,
		OutHits,
		false
	);
	return OutHits;
}

#pragma endregion
