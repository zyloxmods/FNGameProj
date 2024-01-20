#pragma once
#include "CoreMinimal.h"
#include "FortShowdownDivisionEventView.h"
#include "FortDivisionDetailsInfo.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDivisionDetailsInfo : public UFortShowdownDivisionEventView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBoxes_DivisionProgressRanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ResetTimeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ResetTime;
    
public:
    UFortDivisionDetailsInfo();
};

