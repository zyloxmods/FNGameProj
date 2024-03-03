#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "MobileHUDVisual.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMobileHUDVisual : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VisualType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
public:
    UMobileHUDVisual();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetVisualType() const;
    
};

