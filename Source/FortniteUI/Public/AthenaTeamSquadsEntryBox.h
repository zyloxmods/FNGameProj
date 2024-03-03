#pragma once
#include "CoreMinimal.h"
#include "Components/DynamicEntryBoxBase.h"
#include "Templates/SubclassOf.h"
#include "AthenaTeamSquadsEntryBox.generated.h"

class UAthenaTeamSquadEntry;

UCLASS(Blueprintable)
class UAthenaTeamSquadsEntryBox : public UDynamicEntryBoxBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaTeamSquadEntry> SquadEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayEmptySquads;
    
public:
};

