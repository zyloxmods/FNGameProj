#pragma once
#include "CoreMinimal.h"
#include "SettingData.h"
#include "OptionsTabData.generated.h"

USTRUCT(BlueprintType)
struct FOptionsTabData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSettingData> SettingDatas;
    
    FORTNITEUI_API FOptionsTabData();
};

