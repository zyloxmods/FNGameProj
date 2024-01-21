#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaSquadListBase.generated.h"

class AFortPlayerStateAthena;
class UAthenaPlayerInfoBase;
class UDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaSquadListBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPlayerInfoBase* LocalPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SquadList;
    
public:
    UAthenaSquadListBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadMemberDisconnected(const AFortPlayerStateAthena* Player);
    
};

