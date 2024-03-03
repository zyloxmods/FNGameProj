#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortPhoenixLevelProgressionRewards.h"
#include "FortPhoenixLevelProgressionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortPhoenixLevelProgressionWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortPhoenixLevelProgressionWidget();
protected:
    UFUNCTION(BlueprintCallable)
    FFortPhoenixLevelProgressionRewards GetNextPhoenixLevelUpRewards(int32 StartingLevel);
    
};

