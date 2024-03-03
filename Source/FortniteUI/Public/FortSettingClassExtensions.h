#pragma once
#include "CoreMinimal.h"
#include "FortSettingClassExtensions.generated.h"

class UFortSettingDetailExtension;

USTRUCT(BlueprintType)
struct FFortSettingClassExtensions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFortSettingDetailExtension>> Extensions;
    
    FORTNITEUI_API FFortSettingClassExtensions();
};

