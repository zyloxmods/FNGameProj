#pragma once
#include "CoreMinimal.h"
#include "FortSetting.h"
#include "FortSettingCollection.generated.h"

UCLASS(Blueprintable)
class UFortSettingCollection : public UFortSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSetting*> Settings;
    
public:
    UFortSettingCollection();
};

