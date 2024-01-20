#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortScriptedActionSource.h"
#include "FortScriptedActionParams.generated.h"

class AFortPlayerController;
class UFortItem;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortScriptedActionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortScriptedActionSource SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* SourceItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceName;
    
    FFortScriptedActionParams();
};

