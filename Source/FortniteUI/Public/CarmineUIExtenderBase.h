#pragma once
#include "CoreMinimal.h"
#include "FortGameUIExtenderAthena.h"
#include "CarmineUIExtenderBase.generated.h"

class UFortGameUIExtenderAthena;

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UCarmineUIExtenderBase : public UFortGameUIExtenderAthena {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowGoToBossCommand;
    
public:
    UCarmineUIExtenderBase();
};

