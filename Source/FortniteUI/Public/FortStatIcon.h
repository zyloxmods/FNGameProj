#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortBrushSize.h"
#include "AttributeSet.h"
#include "FortStatIcon.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStatIcon : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UFortStatIcon();
    UFUNCTION(BlueprintCallable)
    void SetAttribute(const FGameplayAttribute& InAttribute);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentAttributeSetBP();
    
};

