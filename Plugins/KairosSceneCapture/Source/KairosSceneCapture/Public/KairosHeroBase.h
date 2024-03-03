#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKairosHeroAnimationState.h"
#include "EKairosHeroSkeletonType.h"
#include "KairosAnimationFramingInfo.h"
#include "KairosCaptureParams.h"
#include "KairosHeroBase.generated.h"

class AFortPlayerPawn;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class KAIROSSCENECAPTURE_API AKairosHeroBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeingCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKairosHeroAnimationState CurrentAnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKairosHeroSkeletonType SkeletonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* CapturePawn;
    
    AKairosHeroBase();
    UFUNCTION(BlueprintCallable)
    bool EndCapture();
    
    UFUNCTION(BlueprintCallable)
    bool BeginCapture(FKairosAnimationFramingInfo FramingInfo, FKairosCaptureParams CaptureParams);
    
};

