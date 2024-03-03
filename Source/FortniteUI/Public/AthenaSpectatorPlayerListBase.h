#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "ESpectatorPlayerListSortMethod.h"
#include "AthenaSpectatorPlayerListBase.generated.h"

class UAthenaRemotePlayerViewData;
class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorPlayerListBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaRemotePlayerViewData*> PlayerDataArray;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SortListRowHandles[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ShowPlayerProfileRowHandle;
    
public:
    UAthenaSpectatorPlayerListBase();
    UFUNCTION(BlueprintCallable)
    void SetSortMethod(ESpectatorPlayerListSortMethod InNewSortMethod);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandlePlayerEventScoreChanged(int32 EventScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleCurrentSortMethodChanged(ESpectatorPlayerListSortMethod NewSortMethod);
    
};

