#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "AthenaTeamSquadsEntryBox.generated.h"

class UAthenaTeamSquadEntry;

UCLASS(Blueprintable)
class UAthenaTeamSquadsEntryBox : public UWidget /*UDynamicEntryBoxBase should exist in s9*/ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaTeamSquadEntry> SquadEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayEmptySquads;
    
public:
    UAthenaTeamSquadsEntryBox();
};

