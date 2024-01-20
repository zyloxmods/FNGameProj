#pragma once
#include "CoreMinimal.h"
#include "AthenaEventScreenBase.h"
#include "ESpectatorPlayerListSortMethod.h"
#include "AthenaSpectatorPlayerListBase.generated.h"

class UAthenaRemotePlayerViewData;
class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorPlayerListBase : public UAthenaEventScreenBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSortMethodDelegate, ESpectatorPlayerListSortMethod, SortMethodParam);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSortMethodDelegate OnSortMethodChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaRemotePlayerViewData*> PlayerDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpectatorPlayerListSortMethod CurrentSortMethod;
    
public:
    UAthenaSpectatorPlayerListBase();
    UFUNCTION(BlueprintCallable)
    void SetSortMethod(ESpectatorPlayerListSortMethod InNewSortMethod);
    
    UFUNCTION(BlueprintCallable)
    void FocusListView(UAthenaRemotePlayerViewData* ItemToFocus);
    
};

