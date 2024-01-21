#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaReplayBrowserEntryWidget.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReplayBrowserEntryWidget : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ReplayBrowserEntryObject;
    
public:
    UAthenaReplayBrowserEntryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplayBrowserEntryDataSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDateTimeText(const FDateTime DateTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

