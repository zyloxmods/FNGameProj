#pragma once
#include "CoreMinimal.h"
#include "EFortCurieNativeFXType.h"
#include "FortCurieGlowFadeRequest.generated.h"

class UFortCurieComponent;

USTRUCT(BlueprintType)
struct FFortCurieGlowFadeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCurieComponent* CurieComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCurieNativeFXType FXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFadeIn;
    
    FORTNITEGAME_API FFortCurieGlowFadeRequest();
};

