#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortHealthWarningBase.generated.h"

class UCommonTextBlock;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHealthWarningBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowTimeLength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_HealthWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_RatingsIcons;
    
public:
    UFortHealthWarningBase();
};

