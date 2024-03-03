#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaLoadoutEntryWidget.generated.h"

class UFortAthenaInventoryLoadout;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaLoadoutEntryWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaInventoryLoadout* SelectedLoadout;
    
public:
    UAthenaLoadoutEntryWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLoadout(const UFortAthenaInventoryLoadout* NewLoadout);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutPicked();
    
};

