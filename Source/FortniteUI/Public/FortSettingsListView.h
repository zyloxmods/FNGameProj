#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "FortSettingsListView.generated.h"

class UFortSettingVisualData;

UCLASS(Blueprintable)
class UFortSettingsListView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingVisualData* VisualData;
    
public:
};

