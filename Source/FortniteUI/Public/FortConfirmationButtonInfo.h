#pragma once
#include "CoreMinimal.h"
#include "FortConfirmationButtonInfo.generated.h"

class UCommonButton;

USTRUCT(BlueprintType)
struct FFortConfirmationButtonInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButton* Button;
    
    FORTNITEUI_API FFortConfirmationButtonInfo();
};

