#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CurieEffectContainer.h"
#include "CurieElementBehavior.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class CURIE_API UCurieElementBehavior : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnBeginAttachmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OngoingAttachmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnEndAttachmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnInstantInteractionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnBeginInteractionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OngoingInteractionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurieEffectContainer> OnEndInteractionEffects;
    
public:
    UCurieElementBehavior();
};

