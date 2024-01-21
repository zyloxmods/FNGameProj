#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESettingTab.h"
#include "ESettingType.h"
#include "OptionsReleaseInfo.h"
#include "FortCreativeOptions.generated.h"

UCLASS(Blueprintable, Config=Creative)
class UFortCreativeOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentReleaseVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptionsReleaseInfo> ReleaseInfo;
    
    UFortCreativeOptions();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVisibleOption(ESettingType SettingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVisibleOptionsForTab(ESettingTab TabType, TArray<ESettingType>& VisibleOptions);
    
};

