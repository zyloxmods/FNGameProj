#pragma once
#include "CoreMinimal.h"
#include "EFortMemberConnectionState.h"
#include "FortTeamMemberEntryBase.h"
#include "FortCampaignTeamMemberEntry.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCampaignTeamMemberEntry : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepresentedMemberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMemberConnectionState CurrentConnectionState;
    
public:
    UFortCampaignTeamMemberEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamMemberConnectionStateChanged(EFortMemberConnectionState NewConnectionState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTeamMembers() const;
    
};

