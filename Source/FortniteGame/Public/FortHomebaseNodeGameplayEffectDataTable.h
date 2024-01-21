#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "FortHomebaseNodeGameplayEffectDataTable.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHomebaseNodeGameplayEffectDataTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> TemplateAttributeGEs;
    
public:
    UFortHomebaseNodeGameplayEffectDataTable();
};

