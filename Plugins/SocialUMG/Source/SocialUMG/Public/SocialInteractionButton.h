#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "SocialInteractionButton.generated.h"

class UBorder;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialInteractionButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultIndicatorColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AlertingIndicatorColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_InteractionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_InteractionIndicator;
    
public:
    USocialInteractionButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlatformOnlyFriend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetInteractionName() const;
    
};

