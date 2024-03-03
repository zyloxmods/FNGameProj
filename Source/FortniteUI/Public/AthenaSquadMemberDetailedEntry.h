#pragma once
#include "CoreMinimal.h"
#include "AthenaTeamDisplayInfo.h"
#include "FortBasicTeamMemberEntry.h"
#include "AthenaSquadMemberDetailedEntry.generated.h"

class UCommonTextBlock;
class UFortSocialAvatarIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSquadMemberDetailedEntry : public UFortBasicTeamMemberEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* AvatarIcon_MemberAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ParticipationStatus;
    
public:
    UAthenaSquadMemberDetailedEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadAssigned();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaTeamDisplayInfo GetSquadDisplayInfo() const;
    
};

