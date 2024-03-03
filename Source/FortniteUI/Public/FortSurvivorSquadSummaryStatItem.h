#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortBrushSize.h"
#include "FortAttributeModifierAccumulation.h"
#include "FortSurvivorSquadSummaryStatItem.generated.h"

class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortBrushSize::Type> ImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Name;
    
    UFortSurvivorSquadSummaryStatItem();
    UFUNCTION(BlueprintCallable)
    void SetAttributeModifierAccumulation(const FFortAttributeModifierAccumulation& Accumulation);
    
};

