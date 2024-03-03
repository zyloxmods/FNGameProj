#pragma once
#include "CoreMinimal.h"
#include "CommonRegisteredTabInfo.generated.h"

class UCommonButton;
class UWidget;

USTRUCT(BlueprintType)
struct FCommonRegisteredTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* TabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ContentInstance;
    
    COMMONUI_API FCommonRegisteredTabInfo();
};

