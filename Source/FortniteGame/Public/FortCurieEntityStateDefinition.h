#pragma once
#include "CoreMinimal.h"
#include "CurieEntityStateDefinitionBase.h"
#include "GameplayTagContainer.h"
#include "EFortCurieNativeFXType.h"
#include "FortCurieEntityStateDefinition.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieEntityStateDefinition : public FCurieEntityStateDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCurieNativeFXType NativeVFXType;
    
public:
    FORTNITEGAME_API FFortCurieEntityStateDefinition();
};

