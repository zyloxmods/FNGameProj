#pragma once
#include "CoreMinimal.h"
#include "AthenaMapScreenContainerTabInfo.generated.h"

class UCommonActivatableWidget;
class UObject;

USTRUCT(BlueprintType)
struct FAthenaMapScreenContainerTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> TabIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> TabClass;
    
    FORTNITEUI_API FAthenaMapScreenContainerTabInfo();
};

