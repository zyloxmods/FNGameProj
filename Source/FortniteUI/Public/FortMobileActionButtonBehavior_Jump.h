#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_Jump.generated.h"

class UAbilitySystemComponent;
class UPaperSprite;

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_Jump : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* ThrowSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* JetpackSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PawnTagsCollapse;
    
public:
    UFortMobileActionButtonBehavior_Jump();
};

