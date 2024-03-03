#pragma once
#include "CoreMinimal.h"
#include "FortSettingNameExtensions.generated.h"

class UFortSettingDetailExtension;

USTRUCT(BlueprintType)
struct FFortSettingNameExtensions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeClassDefaultExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFortSettingDetailExtension>> Extensions;
    
    FORTNITEUI_API FFortSettingNameExtensions();
};

