#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortTournamentLiveGameSessionEntry.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentLiveGameSessionEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_GameTimeDuration;
    
public:
    UFortTournamentLiveGameSessionEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntrySet(int32 EntryIndex);
    
    
    // Fix for true pure virtual functions not being implemented
};

