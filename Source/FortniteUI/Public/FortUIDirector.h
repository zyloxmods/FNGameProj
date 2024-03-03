#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortUIDirectorSubsystemBase.h"
#include "Templates/SubclassOf.h"
#include "FortUIDirector.generated.h"

class UFortUIManager;

UCLASS(Blueprintable, Config=Game)
class UFortUIDirector : public UFortUIDirectorSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EntrywayManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AthenaManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CampaignManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortUIManager> EntrywayManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortUIManager> AthenaManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortUIManager> CampaignManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUIManager* CurrentManager;
    
public:
    UFortUIDirector();
};

