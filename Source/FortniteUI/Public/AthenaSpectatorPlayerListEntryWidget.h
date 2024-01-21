#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaSpectatorPlayerListEntryWidget.generated.h"

class UAthenaSpectatorPlayerListRowData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorPlayerListEntryWidget : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorPlayerListRowData* PlayerListRowData;
    
public:
    UAthenaSpectatorPlayerListEntryWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryDataSet();
    
    
    // Fix for true pure virtual functions not being implemented
};

