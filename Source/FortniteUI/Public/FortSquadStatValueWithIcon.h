#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortBrushSize.h"
#include "AttributeSet.h"
#include "FortSquadStatValueWithIcon.generated.h"

class UCommonNumericTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadStatValueWithIcon : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute TeamAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UFortSquadStatValueWithIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentAttributeSetBP();
    
};

